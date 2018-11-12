//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LFUIInputTextView.h"

@class LFUIEmotionView, LFUIPlaceHolderTextView, NSMutableDictionary, UIButton;

@interface LFRoomNormalInputBar : LFUIInputTextView
{
    _Bool _showing;
    LFUIPlaceHolderTextView *_textView;
    NSMutableDictionary *_cacheTextDic;
    long long _maxInputTextLenght;
    UIButton *_voiceButton;
    CDUnknownBlockType _dmButtonBlock;
    CDUnknownBlockType _voiceButtonBlock;
    CDUnknownBlockType _emotionButtonBlock;
    CDUnknownBlockType _sendButtonBlock;
    CDUnknownBlockType _showStatusChangeBlock;
    CDUnknownBlockType _didReciveError;
    UIButton *_dmButton;
    UIButton *_emotionButton;
    UIButton *_sendButton;
    LFUIEmotionView *_emtionView;
    NSMutableDictionary *_inputContentDic;
    long long _currentInputTextType;
}

+ (double)getStrTemp:(id)arg1 maxLength:(long long)arg2 maxLocation:(long long *)arg3;
@property(nonatomic) long long currentInputTextType; // @synthesize currentInputTextType=_currentInputTextType;
@property(retain, nonatomic) NSMutableDictionary *inputContentDic; // @synthesize inputContentDic=_inputContentDic;
@property(retain, nonatomic) LFUIEmotionView *emtionView; // @synthesize emtionView=_emtionView;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UIButton *emotionButton; // @synthesize emotionButton=_emotionButton;
@property(retain, nonatomic) UIButton *dmButton; // @synthesize dmButton=_dmButton;
@property(copy, nonatomic) CDUnknownBlockType didReciveError; // @synthesize didReciveError=_didReciveError;
@property(copy, nonatomic) CDUnknownBlockType showStatusChangeBlock; // @synthesize showStatusChangeBlock=_showStatusChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType sendButtonBlock; // @synthesize sendButtonBlock=_sendButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType emotionButtonBlock; // @synthesize emotionButtonBlock=_emotionButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType voiceButtonBlock; // @synthesize voiceButtonBlock=_voiceButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType dmButtonBlock; // @synthesize dmButtonBlock=_dmButtonBlock;
@property(retain, nonatomic) UIButton *voiceButton; // @synthesize voiceButton=_voiceButton;
@property(nonatomic) long long maxInputTextLenght; // @synthesize maxInputTextLenght=_maxInputTextLenght;
@property(retain, nonatomic) NSMutableDictionary *cacheTextDic; // @synthesize cacheTextDic=_cacheTextDic;
- (_Bool)isShowing;
- (void)setTextView:(id)arg1;
- (void).cxx_destruct;
- (id)textView;
- (void)setShowing:(_Bool)arg1;
- (void)sendButtonClicked:(id)arg1;
- (void)emotionButtonClicked:(id)arg1;
- (void)voiceButtonClicked:(id)arg1;
- (void)danmuButtonClicked:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

