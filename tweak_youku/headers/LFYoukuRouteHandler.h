//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LFYoukuRouteHandler : NSObject
{
    id <LFYoukuRouteHandlerDelegate> _delegate;
    NSString *_host;
}

@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(nonatomic) __weak id <LFYoukuRouteHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)closeController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)handleURL:(id)arg1 source:(id)arg2 parameters:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

