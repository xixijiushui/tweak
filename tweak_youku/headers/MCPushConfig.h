//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSDictionary<Optional>;

@interface MCPushConfig : JSONModel
{
    double _sceneIntervalTime;
    double _indexIntervalTime;
    NSDictionary<Optional> *_tipContent;
}

@property(retain, nonatomic) NSDictionary<Optional> *tipContent; // @synthesize tipContent=_tipContent;
@property(nonatomic) double indexIntervalTime; // @synthesize indexIntervalTime=_indexIntervalTime;
@property(nonatomic) double sceneIntervalTime; // @synthesize sceneIntervalTime=_sceneIntervalTime;
- (void).cxx_destruct;

@end

