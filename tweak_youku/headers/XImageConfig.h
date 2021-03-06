//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface XImageConfig : NSObject
{
    _Bool _enableOSS;
    _Bool _enableGIF;
    unsigned long long _loadMode;
    double _cornerRadius;
    UIColor *_backgroundColor;
    long long _blurRadius;
    struct CGSize _size;
}

@property(nonatomic) _Bool enableGIF; // @synthesize enableGIF=_enableGIF;
@property(nonatomic) _Bool enableOSS; // @synthesize enableOSS=_enableOSS;
@property(nonatomic) long long blurRadius; // @synthesize blurRadius=_blurRadius;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) unsigned long long loadMode; // @synthesize loadMode=_loadMode;
- (void).cxx_destruct;
- (id)placeholderInfoDesc;
- (id)init;

@end

