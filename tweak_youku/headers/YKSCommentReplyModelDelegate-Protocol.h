//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YKFSaintseiyaCommentItemDTO, YKFSaintseiyaCommentReplyItemDTO;

@protocol YKSCommentReplyModelDelegate <NSObject>
- (void)didDeleteCommentItem:(YKFSaintseiyaCommentItemDTO *)arg1;
- (void)didDeleteCommentReply:(YKFSaintseiyaCommentReplyItemDTO *)arg1;
- (void)didStartLikeComment:(YKFSaintseiyaCommentItemDTO *)arg1;
- (void)didStartSendComment:(YKFSaintseiyaCommentItemDTO *)arg1;
@end

