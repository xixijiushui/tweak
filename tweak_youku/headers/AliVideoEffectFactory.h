//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface AliVideoEffectFactory : NSObject
{
    NSArray *_pictures;
    NSDictionary *_pictureEffectMap;
    NSArray *_times;
    NSDictionary *_timeEffectMap;
}

+ (id)factory;
@property(copy, nonatomic) NSDictionary *timeEffectMap; // @synthesize timeEffectMap=_timeEffectMap;
@property(copy, nonatomic) NSArray *times; // @synthesize times=_times;
@property(copy, nonatomic) NSDictionary *pictureEffectMap; // @synthesize pictureEffectMap=_pictureEffectMap;
@property(copy, nonatomic) NSArray *pictures; // @synthesize pictures=_pictures;
- (void).cxx_destruct;
- (id)findTimeEffectByID:(id)arg1;
- (id)findPictureEffectByID:(id)arg1;
- (id)timeEffects;
- (id)pictureEffects;
- (void)loadEffects;
- (id)init;

@end

