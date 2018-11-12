//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIFont;

@interface YKTaskReachToastStyle : NSObject
{
    _Bool _displayShadow;
    _Bool _tapToDismissEnabled;
    UIColor *_backgroundColor;
    UIColor *_titleColor;
    UIColor *_messageColor;
    double _maxWidthPercentage;
    double _maxHeightPercentage;
    double _horizontalPadding;
    double _verticalPadding;
    double _cornerRadius;
    UIFont *_titleFont;
    UIFont *_messageFont;
    long long _titleAlignment;
    long long _messageAlignment;
    long long _titleNumberOfLines;
    long long _messageNumberOfLines;
    UIColor *_shadowColor;
    double _shadowOpacity;
    double _shadowRadius;
    double _fadeDuration;
    NSString *_bgImageUrl;
    NSString *_iconImageUrl;
    id _position;
    double _duration;
    double _xOffset;
    double _yOffset;
    struct CGSize _shadowOffset;
    struct CGSize _imageSize;
    struct CGSize _activitySize;
    struct CGSize _bgImageSize;
}

+ (id)generateNewDefaultStyle;
@property(nonatomic) struct CGSize bgImageSize; // @synthesize bgImageSize=_bgImageSize;
@property(nonatomic) double yOffset; // @synthesize yOffset=_yOffset;
@property(nonatomic) double xOffset; // @synthesize xOffset=_xOffset;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool tapToDismissEnabled; // @synthesize tapToDismissEnabled=_tapToDismissEnabled;
@property(retain, nonatomic) id position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *iconImageUrl; // @synthesize iconImageUrl=_iconImageUrl;
@property(retain, nonatomic) NSString *bgImageUrl; // @synthesize bgImageUrl=_bgImageUrl;
@property(nonatomic) double fadeDuration; // @synthesize fadeDuration=_fadeDuration;
@property(nonatomic) struct CGSize activitySize; // @synthesize activitySize=_activitySize;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) _Bool displayShadow; // @synthesize displayShadow=_displayShadow;
@property(nonatomic) long long messageNumberOfLines; // @synthesize messageNumberOfLines=_messageNumberOfLines;
@property(nonatomic) long long titleNumberOfLines; // @synthesize titleNumberOfLines=_titleNumberOfLines;
@property(nonatomic) long long messageAlignment; // @synthesize messageAlignment=_messageAlignment;
@property(nonatomic) long long titleAlignment; // @synthesize titleAlignment=_titleAlignment;
@property(retain, nonatomic) UIFont *messageFont; // @synthesize messageFont=_messageFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double verticalPadding; // @synthesize verticalPadding=_verticalPadding;
@property(nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
@property(nonatomic) double maxHeightPercentage; // @synthesize maxHeightPercentage=_maxHeightPercentage;
@property(nonatomic) double maxWidthPercentage; // @synthesize maxWidthPercentage=_maxWidthPercentage;
@property(retain, nonatomic) UIColor *messageColor; // @synthesize messageColor=_messageColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDefaultStyle;

@end

