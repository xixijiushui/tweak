//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFReplyToolBasePlugin.h"

@class UIView<YKFReplyTextViewProtocol>;

@interface YKFReplyToolInputablePlugin : YKFReplyToolBasePlugin
{
    _Bool _inputting;
    UIView<YKFReplyTextViewProtocol> *_textView;
}

@property(nonatomic, getter=isInputting) _Bool inputting; // @synthesize inputting=_inputting;
@property(nonatomic) __weak UIView<YKFReplyTextViewProtocol> *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)inputablePluginDidDeactive;
- (void)inputablePluginDidActive;
- (id)inputView;

@end

