//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VICModel.h"

@class NSString;

@interface VICExitInfo : VICModel
{
    float _exitTime;
    NSString *_closeMode;
    NSString *_exitMode;
    NSString *_animation;
}

+ (id)modelWithDictionary:(id)arg1;
@property(nonatomic) float exitTime; // @synthesize exitTime=_exitTime;
@property(retain, nonatomic) NSString *animation; // @synthesize animation=_animation;
@property(retain, nonatomic) NSString *exitMode; // @synthesize exitMode=_exitMode;
@property(retain, nonatomic) NSString *closeMode; // @synthesize closeMode=_closeMode;
- (void).cxx_destruct;

@end

