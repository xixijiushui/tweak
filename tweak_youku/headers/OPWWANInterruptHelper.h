//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ADTeamModel, YKJSONClient;

@interface OPWWANInterruptHelper : NSObject
{
    ADTeamModel *_adModel;
    YKJSONClient *_jsonClient;
}

@property(retain, nonatomic) YKJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
@property(retain, nonatomic) ADTeamModel *adModel; // @synthesize adModel=_adModel;
- (void).cxx_destruct;
- (void)requestAdvInfoWithVID:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)cancelAllOperations;
- (void)dealloc;
- (id)init;

@end

