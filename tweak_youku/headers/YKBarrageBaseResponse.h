//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@interface YKBarrageBaseResponse : NSObject
{
    NSError *_error;
}

+ (id)errorWithCode:(long long)arg1 message:(id)arg2 retCode:(id)arg3;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
+ (id)buildFromJsonDict:(id)arg1 andError:(id)arg2;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)mergeFromJSON:(id)arg1;
- (void)setErrorWithCode:(long long)arg1 message:(id)arg2;

@end

