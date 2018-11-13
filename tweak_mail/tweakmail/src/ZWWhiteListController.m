//
//  ZWWhiteListController.m
//  TestARM
//
//  Created by 赵伟 on 2018/11/12.
//  Copyright © 2018年 com.zw.Test. All rights reserved.
//

#import "ZWWhiteListController.h"

@interface ZWWhiteListController ()

@property (nonatomic, strong) NSMutableArray *dataArr;
@end

@implementation ZWWhiteListController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.navigationItem.title = @"WhiteLists";
    
    [self setRightNavigationBar];
    [self loadData];
    [self setTableViewStyle];
}

- (void)setTableViewStyle {
    self.tableView.separatorStyle = UITableViewCellSeparatorStyleSingleLine;
    self.tableView.separatorColor = [UIColor lightGrayColor];
}

- (void)loadData {
    self.dataArr = [NSMutableArray array];
    NSArray *whiteLists = [[NSUserDefaults standardUserDefaults] objectForKey:@"WhiteList"];
    if (whiteLists) {
        [self.dataArr addObjectsFromArray:whiteLists];
    }
}

- (void)setRightNavigationBar {
    self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc] initWithTitle:@"新增 " style:UIBarButtonItemStylePlain target:self action:@selector(addWhiteList)];
}

- (void)addWhiteList {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"新增白名单" message:nil preferredStyle:UIAlertControllerStyleAlert];
    UIAlertAction *ensure = [UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
        NSString *textTitle = [alert.textFields.firstObject text];
        [self.dataArr addObject:textTitle];
        [[NSUserDefaults standardUserDefaults] setObject:[NSArray arrayWithArray:self.dataArr] forKey:@"WhiteList"];
        [[NSUserDefaults standardUserDefaults] synchronize];
        [self.tableView reloadData];
    }];
    UIAlertAction *cancel = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil];
    [alert addTextFieldWithConfigurationHandler:^(UITextField * _Nonnull textField) {
        textField.placeholder = @"请填写发件人信息";
    }];
    [alert addAction:cancel];
    [alert addAction:ensure];
    [self presentViewController:alert animated:YES completion:nil];
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return self.dataArr.count;;
}

static NSString *WhiteListCellId = @"WhiteListCellId";
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:WhiteListCellId];
    if (!cell) {
        cell = [[UITableViewCell alloc]initWithStyle:UITableViewCellStyleDefault reuseIdentifier:WhiteListCellId];
    }
    NSString *whiteList = self.dataArr[indexPath.row];
    cell.textLabel.text = whiteList;
    
    [cell setLayoutMargins:UIEdgeInsetsZero];
    [cell setSeparatorInset:UIEdgeInsetsZero];
    [cell setPreservesSuperviewLayoutMargins:NO];
    return cell;
}

- (UITableViewCellEditingStyle)tableView:(UITableView *)tableView editingStyleForRowAtIndexPath:(NSIndexPath *)indexPath {
    return UITableViewCellEditingStyleDelete;
}

- (void)tableView:(UITableView *)tableView commitEditingStyle:(UITableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath *)indexPath {
    [self.dataArr removeObjectAtIndex:indexPath.row];
    [[NSUserDefaults standardUserDefaults] setObject:[NSArray arrayWithArray:self.dataArr] forKey:@"WhiteList"];
    [[NSUserDefaults standardUserDefaults] synchronize];
    [self.tableView reloadData];
}
@end
