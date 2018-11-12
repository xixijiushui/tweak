//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewDelegate.h"

@class UITableView, UITableViewCell;

@protocol ALMTableViewBindHelperDelegate <UITableViewDelegate>

@optional
- (void)tableView:(UITableView *)arg1 didSelectRow:(id <ALMTableRowProtocol>)arg2;
- (void)tableView:(UITableView *)arg1 onDeleteRow:(id <ALMTableRowProtocol>)arg2;
- (_Bool)tableView:(UITableView *)arg1 canEditRow:(id <ALMTableRowProtocol>)arg2;
- (_Bool)tableView:(UITableView *)arg1 canMoveRow:(id <ALMTableRowProtocol>)arg2;
- (double)tableView:(UITableView *)arg1 heightForRow:(id <ALMTableRowProtocol>)arg2;
- (void)tableView:(UITableView *)arg1 bindCell:(UITableViewCell *)arg2 forRow:(id <ALMTableRowProtocol>)arg3;
- (void)tableView:(UITableView *)arg1 didLoadCell:(UITableViewCell *)arg2 forRow:(id <ALMTableRowProtocol>)arg3;
- (void)tableView:(UITableView *)arg1 willLoadCell:(UITableViewCell *)arg2 forRow:(id <ALMTableRowProtocol>)arg3;
- (void)tableView:(UITableView *)arg1 willLayoutCellSubviews:(UITableViewCell *)arg2 forRow:(id <ALMTableRowProtocol>)arg3;
- (void)tableView:(UITableView *)arg1 didEndDisplayCell:(UITableViewCell *)arg2 forRow:(id <ALMTableRowProtocol>)arg3;
- (void)tableView:(UITableView *)arg1 willDisplayCell:(UITableViewCell *)arg2 forRow:(id <ALMTableRowProtocol>)arg3;
@end

