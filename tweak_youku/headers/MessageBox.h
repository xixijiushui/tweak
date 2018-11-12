//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MessageBoxView, NSMutableArray;

@interface MessageBox : NSObject
{
    _Bool _isRichText;
    int _messageViewOprientation;
    int _messageBoxMode;
    NSMutableArray *_messageQueue;
    MessageBoxView *_messageBoxView;
}

+ (id)sharedInstance;
+ (void)showMessage:(id)arg1;
@property(nonatomic) _Bool isRichText; // @synthesize isRichText=_isRichText;
@property(retain, nonatomic) MessageBoxView *messageBoxView; // @synthesize messageBoxView=_messageBoxView;
@property(retain, nonatomic) NSMutableArray *messageQueue; // @synthesize messageQueue=_messageQueue;
@property(nonatomic) int messageBoxMode; // @synthesize messageBoxMode=_messageBoxMode;
@property(nonatomic) int messageViewOprientation; // @synthesize messageViewOprientation=_messageViewOprientation;
- (void).cxx_destruct;
- (void)didChangeStatusBarFrame:(id)arg1;
- (void)cancel:(id)arg1;
- (_Bool)isDisplay:(id)arg1;
- (void)removeFromQueue:(id)arg1;
- (void)hidden:(id)arg1;
- (void)hiddenWithAnimation:(id)arg1;
- (void)layoutMessageWindowWithSize:(struct CGSize)arg1;
- (void)showMessageFromQueue;
- (void)hideAllMessage;
- (void)handleMessageWithItem:(id)arg1;
- (id)showMessage:(id)arg1 params:(id)arg2 action:(CDUnknownBlockType)arg3 dismiss:(CDUnknownBlockType)arg4;
- (id)showMessage:(id)arg1 params:(id)arg2;
- (id)showMessage:(id)arg1 style:(long long)arg2 action:(CDUnknownBlockType)arg3 dismiss:(CDUnknownBlockType)arg4 duration:(double)arg5;
- (id)showMessage:(id)arg1 style:(long long)arg2 contentMode:(id)arg3 marginBottom:(double)arg4 action:(CDUnknownBlockType)arg5 dismiss:(CDUnknownBlockType)arg6 duration:(double)arg7;
- (id)showRichMessage:(id)arg1 style:(long long)arg2 action:(CDUnknownBlockType)arg3 dismiss:(CDUnknownBlockType)arg4 duration:(double)arg5 messageboxWidth:(double)arg6;
- (id)showRichMessage:(id)arg1 style:(long long)arg2 action:(CDUnknownBlockType)arg3 dismiss:(CDUnknownBlockType)arg4 duration:(double)arg5;
- (id)showMessage:(id)arg1 action:(CDUnknownBlockType)arg2 dismiss:(CDUnknownBlockType)arg3 duration:(double)arg4;
- (id)showMessage:(id)arg1 action:(CDUnknownBlockType)arg2 duration:(double)arg3;
- (id)showMessage:(id)arg1 action:(CDUnknownBlockType)arg2 dismiss:(CDUnknownBlockType)arg3;
- (id)showMessage:(id)arg1 action:(CDUnknownBlockType)arg2;
- (id)showMessage:(id)arg1;
- (id)init;
- (id)showMessage:(id)arg1 style:(long long)arg2 action:(CDUnknownBlockType)arg3 dismiss:(CDUnknownBlockType)arg4 duration:(double)arg5 showInView:(id)arg6;
- (id)showMessage:(id)arg1 action:(CDUnknownBlockType)arg2 dismiss:(CDUnknownBlockType)arg3 duration:(double)arg4 showInView:(id)arg5;

@end
