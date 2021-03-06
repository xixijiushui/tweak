//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSSet, YKBarrageConfiguration;

@interface YKBarrageViewPool : NSObject
{
    NSMutableSet *_viewsInUse;
    YKBarrageConfiguration *_configuration;
    NSMutableSet *_viewsSet;
    unsigned long long _existingCount;
    Class _barrageViewClass;
}

@property(retain, nonatomic) Class barrageViewClass; // @synthesize barrageViewClass=_barrageViewClass;
@property(nonatomic) unsigned long long existingCount; // @synthesize existingCount=_existingCount;
@property(retain, nonatomic) NSMutableSet *viewsSet; // @synthesize viewsSet=_viewsSet;
@property(nonatomic) __weak YKBarrageConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSSet *viewsInUse; // @synthesize viewsInUse=_viewsInUse;
- (void).cxx_destruct;
- (id)createNewBarrageView;
- (void)drain;
- (id)dequeueBarrageViewAndForced:(_Bool)arg1;
- (void)enqueueBarrageView:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

@end

