//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YKFErrorHandlerProtocol.h"

@class NSString;

@interface YKFBaseErrorHandler : NSObject <YKFErrorHandlerProtocol>
{
    YKFBaseErrorHandler *_superErrorhandler;
}

+ (id)globalErrorHandler;
+ (void)registerGlobalErrorHandler:(id)arg1;
@property(retain, nonatomic) YKFBaseErrorHandler *superErrorhandler; // @synthesize superErrorhandler=_superErrorhandler;
- (void).cxx_destruct;
- (_Bool)onHandleError:(id)arg1;
- (void)handle:(id)arg1;
- (id)initWithSuperErrorHandler:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

