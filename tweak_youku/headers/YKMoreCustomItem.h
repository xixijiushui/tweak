//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage, UIView, UIViewController;

@interface YKMoreCustomItem : NSObject
{
    _Bool _isMessage;
    UIImage *_normalImage;
    NSString *_imageURL;
    UIImage *_placeholder;
    NSString *_iconFontImageName;
    NSString *_title;
    UIView *_rightView;
    long long _remindType;
    long long _unreadCount;
    UIViewController *_vc;
    CDUnknownBlockType _clickedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType clickedBlock; // @synthesize clickedBlock=_clickedBlock;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
@property(nonatomic) _Bool isMessage; // @synthesize isMessage=_isMessage;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic) long long remindType; // @synthesize remindType=_remindType;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *iconFontImageName; // @synthesize iconFontImageName=_iconFontImageName;
@property(retain, nonatomic) UIImage *placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;
- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 title:(id)arg2 clickedBlock:(CDUnknownBlockType)arg3;

@end

