//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AMFilterSetting : NSObject
{
    NSString *_displayName;
    NSString *_displayCategoryName;
    NSString *_filterName;
    NSString *_icon;
    double _intensity;
}

@property(nonatomic) double intensity; // @synthesize intensity=_intensity;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *filterName; // @synthesize filterName=_filterName;
@property(copy, nonatomic) NSString *displayCategoryName; // @synthesize displayCategoryName=_displayCategoryName;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)init;

@end
