//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YKFSaintseiyaCommentItemDTO, YKFSaintseiyaCommentReplyItemDTO, YKSCommentView;

@protocol YKSCommentViewActionDelegate <NSObject>
- (void)didClickUserNameWithComment:(YKFSaintseiyaCommentItemDTO *)arg1 reply:(YKFSaintseiyaCommentReplyItemDTO *)arg2 commentView:(YKSCommentView *)arg3;
@end
