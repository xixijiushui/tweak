//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VICModel.h"

@class NSArray, NSString, VICPosition;

@interface VICPath : VICModel
{
    VICPosition *_initialPosition;
    VICPosition *_responsePosition;
    NSString *_moveMode;
    NSArray *_pointList;
}

+ (id)modelWithDictionary:(id)arg1;
@property(retain, nonatomic) NSArray *pointList; // @synthesize pointList=_pointList;
@property(retain, nonatomic) NSString *moveMode; // @synthesize moveMode=_moveMode;
@property(retain, nonatomic) VICPosition *responsePosition; // @synthesize responsePosition=_responsePosition;
@property(retain, nonatomic) VICPosition *initialPosition; // @synthesize initialPosition=_initialPosition;
- (void).cxx_destruct;

@end

