//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@protocol YKFErrorHandlerProtocol <NSObject>
@property(copy, nonatomic) CDUnknownBlockType competionCallback;
@property(retain, nonatomic) id <YKFErrorHandlerProtocol> nextErrorHandler;
- (void)handle:(NSError *)arg1;
- (id <YKFErrorHandlerProtocol>)handlerForError:(NSError *)arg1;
- (id)initWithNextErrorHandler:(id <YKFErrorHandlerProtocol>)arg1;
@end

