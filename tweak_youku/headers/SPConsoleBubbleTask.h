//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPModuleTask.h"

@class NSAttributedString, NSString, SPStateMessageView, UIImage, UIImageView;

@interface SPConsoleBubbleTask : SPModuleTask
{
    _Bool _showArrow;
    _Bool _isDown;
    _Bool _isRight;
    NSString *_iconName;
    NSString *_iconUrl;
    NSString *_text;
    NSAttributedString *_attributedText;
    UIImage *_icon;
    unsigned long long _maxTextLength;
    UIImageView *_arrowImageView;
    SPStateMessageView *_messageView;
    UIImageView *_iconImageView;
    CDUnknownBlockType _confirm;
    struct CGPoint _arrowPoint;
    struct UIOffset _arrowOffset;
}

+ (_Bool)canExecuteWithPlayerManager:(id)arg1 priority:(long long)arg2;
+ (void)markExecutedWithBubbleIdentifier:(id)arg1;
+ (_Bool)hasExecutedWithBubbleIdentifier:(id)arg1;
+ (id)consoleBubbleTask;
@property(copy, nonatomic) CDUnknownBlockType confirm; // @synthesize confirm=_confirm;
@property(nonatomic) _Bool isRight; // @synthesize isRight=_isRight;
@property(nonatomic) _Bool isDown; // @synthesize isDown=_isDown;
@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) SPStateMessageView *messageView; // @synthesize messageView=_messageView;
@property(readonly, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(nonatomic) struct UIOffset arrowOffset; // @synthesize arrowOffset=_arrowOffset;
@property(nonatomic) struct CGPoint arrowPoint; // @synthesize arrowPoint=_arrowPoint;
@property(nonatomic) _Bool showArrow; // @synthesize showArrow=_showArrow;
@property(nonatomic) unsigned long long maxTextLength; // @synthesize maxTextLength=_maxTextLength;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
- (void).cxx_destruct;
- (void)setState:(long long)arg1;
- (void)executeWithPlayerManager:(id)arg1;
- (void)setupModuleView;

@end

