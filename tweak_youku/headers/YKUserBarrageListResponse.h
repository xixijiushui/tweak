//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKBarrageBaseResponse.h"

@class NSArray;

@interface YKUserBarrageListResponse : YKBarrageBaseResponse
{
    NSArray *_barrages;
    unsigned long long _apiBarrageCount;
}

@property(nonatomic) unsigned long long apiBarrageCount; // @synthesize apiBarrageCount=_apiBarrageCount;
@property(retain, nonatomic) NSArray *barrages; // @synthesize barrages=_barrages;
- (void).cxx_destruct;
- (void)mergeFromJSON:(id)arg1 forRequest:(id)arg2;

@end

