//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YKFReplyToolProviderProtocol.h"

@class UIColor, YKFReplyToolDefaultPicker;

@interface YKFReplyToolProvider : NSObject <YKFReplyToolProviderProtocol>
{
    _Bool _ykf_shouldAlwaysShowReplyToolView;
    _Bool _ykf_shouldResignFirstResponderOfReplyToolViewWhenTapBackground;
    _Bool _ykf_shouldResignFirstResponderOfReplyToolViewWhenTapSend;
    unsigned long long _ykf_interativeMode;
    UIColor *_ykf_dimBackgroundColor;
    YKFReplyToolDefaultPicker *_ykf_replyToolSkinPicker;
    id <YKFReplyToolViewControllerProtocol> _ykf_replyToolViewController;
    id <YKFReplyToolViewModelProtocol> _ykf_replyToolViewModel;
}

@property(retain, nonatomic) id <YKFReplyToolViewModelProtocol> ykf_replyToolViewModel; // @synthesize ykf_replyToolViewModel=_ykf_replyToolViewModel;
@property(retain, nonatomic) id <YKFReplyToolViewControllerProtocol> ykf_replyToolViewController; // @synthesize ykf_replyToolViewController=_ykf_replyToolViewController;
@property(retain) YKFReplyToolDefaultPicker *ykf_replyToolSkinPicker; // @synthesize ykf_replyToolSkinPicker=_ykf_replyToolSkinPicker;
@property(nonatomic) _Bool ykf_shouldResignFirstResponderOfReplyToolViewWhenTapSend; // @synthesize ykf_shouldResignFirstResponderOfReplyToolViewWhenTapSend=_ykf_shouldResignFirstResponderOfReplyToolViewWhenTapSend;
@property(retain, nonatomic) UIColor *ykf_dimBackgroundColor; // @synthesize ykf_dimBackgroundColor=_ykf_dimBackgroundColor;
@property(nonatomic) _Bool ykf_shouldResignFirstResponderOfReplyToolViewWhenTapBackground; // @synthesize ykf_shouldResignFirstResponderOfReplyToolViewWhenTapBackground=_ykf_shouldResignFirstResponderOfReplyToolViewWhenTapBackground;
@property(nonatomic) _Bool ykf_shouldAlwaysShowReplyToolView; // @synthesize ykf_shouldAlwaysShowReplyToolView=_ykf_shouldAlwaysShowReplyToolView;
@property(nonatomic) unsigned long long ykf_interativeMode; // @synthesize ykf_interativeMode=_ykf_interativeMode;
- (void).cxx_destruct;
- (id)init;

@end

