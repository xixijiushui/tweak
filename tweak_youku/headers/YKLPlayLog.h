//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LSMtopService;

@interface YKLPlayLog : NSObject
{
    LSMtopService *_mtopService;
}

@property(retain, nonatomic) LSMtopService *mtopService; // @synthesize mtopService=_mtopService;
- (void).cxx_destruct;
- (id)dictionaryToJson:(id)arg1;
- (id)arrayToJSONString:(id)arg1;
- (void)getPlayLogRecord:(id)arg1 successBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

