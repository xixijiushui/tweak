//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSIndexPath, NSString, UITableView;

@protocol ASCommonTableDataSource <NSObject>

@optional
- (void)tableView:(UITableView *)arg1 moveRowAtIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;
- (void)tableView:(UITableView *)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (long long)tableView:(UITableView *)arg1 sectionForSectionIndexTitle:(NSString *)arg2 atIndex:(long long)arg3;
- (NSArray *)sectionIndexTitlesForTableView:(UITableView *)arg1;
- (_Bool)tableView:(UITableView *)arg1 canMoveRowAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)tableView:(UITableView *)arg1 canEditRowAtIndexPath:(NSIndexPath *)arg2;
- (NSString *)tableView:(UITableView *)arg1 titleForFooterInSection:(long long)arg2;
- (NSString *)tableView:(UITableView *)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(UITableView *)arg1;
- (long long)tableView:(UITableView *)arg1 numberOfRowsInSection:(long long)arg2;
@end

