//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFJSONRequestOperation.h"

@class NSError;

@interface YKJSONRequestOperation : AFJSONRequestOperation
{
    _Bool _isShouldCache;
    id _responseJSON;
    Class _parserClass;
    double _startDate;
    NSError *_JSONError;
}

+ (_Bool)canProcessRequest:(id)arg1;
@property(retain, nonatomic) NSError *JSONError; // @synthesize JSONError=_JSONError;
@property(nonatomic) double startDate; // @synthesize startDate=_startDate;
@property(nonatomic) _Bool isShouldCache; // @synthesize isShouldCache=_isShouldCache;
@property(retain, nonatomic) Class parserClass; // @synthesize parserClass=_parserClass;
@property(retain, nonatomic) id responseJSON; // @synthesize responseJSON=_responseJSON;
- (void).cxx_destruct;
- (id)error;
- (void)setCompletionBlockWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;

@end

