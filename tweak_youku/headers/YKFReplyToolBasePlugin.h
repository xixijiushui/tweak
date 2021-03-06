//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALMBaseViewModel.h"

@class YKFReplyToolPanelItemConfig;

@interface YKFReplyToolBasePlugin : ALMBaseViewModel
{
    _Bool _exclusive;
    _Bool _switchable;
    _Bool _enabled;
    long long _priority;
    YKFReplyToolPanelItemConfig *_panelItemConfig;
}

@property(retain, nonatomic) YKFReplyToolPanelItemConfig *panelItemConfig; // @synthesize panelItemConfig=_panelItemConfig;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool switchable; // @synthesize switchable=_switchable;
@property(nonatomic) _Bool exclusive; // @synthesize exclusive=_exclusive;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
- (void).cxx_destruct;
- (void)panelItem:(id)arg1 didHideWithInputView:(id)arg2 keyboardFrameEnd:(struct CGRect)arg3 animated:(_Bool)arg4;
- (void)panelItem:(id)arg1 didChangeFrameWithInputView:(id)arg2 keyboardFrameEnd:(struct CGRect)arg3 animated:(_Bool)arg4;
- (void)panelItem:(id)arg1 didShowWithInputView:(id)arg2 keyboardFrameEnd:(struct CGRect)arg3 animated:(_Bool)arg4;
- (void)replyToolWillResignFirstResponder;
- (void)panelItemDidClickWhenDisabled;
- (void)panelItemDidClick;
- (id)init;
- (void)dealloc;
@property(nonatomic) _Bool hidden;
@property(nonatomic) _Bool selected;
- (id)identity;

@end

