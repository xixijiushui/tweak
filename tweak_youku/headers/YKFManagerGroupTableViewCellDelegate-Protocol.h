//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UITableViewCell, YKFManagerGroupMemberItem;

@protocol YKFManagerGroupTableViewCellDelegate <NSObject>
- (void)jumpToPersonalPageWithModel:(YKFManagerGroupMemberItem *)arg1;
- (void)removeMaskView;
- (void)addMaskViewOnCell:(UITableViewCell *)arg1;
- (void)recallFunctionGroupWithGroupId:(long long)arg1 recallId:(long long)arg2;
- (void)gotoAddMemberListPageWithGroupId:(long long)arg1 maxCount:(long long)arg2 groupName:(NSString *)arg3;
@end

