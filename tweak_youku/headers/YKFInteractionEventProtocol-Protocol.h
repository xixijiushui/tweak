//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YKFTopicModel;

@protocol YKFInteractionEventProtocol <NSObject>

@optional
- (void)handleFooterButtonClickAction;
- (void)handleCheckMoreButtonClickAction;
- (void)handleImageViewClickAction;
- (void)handleTopicTextClickActionWithModel:(YKFTopicModel *)arg1;
- (void)handleMenuButtonClickAction;
- (void)handleDisagreeButtonClickActionWithDisagreed:(_Bool)arg1;
- (void)handlePraiseButtonClickActionWithPraised:(_Bool)arg1;
- (void)handleAvatarImageViewClickAction;
- (void)handleDisplayCellAction;
@end

