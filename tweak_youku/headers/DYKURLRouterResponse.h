//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController;

@interface DYKURLRouterResponse : NSObject
{
    UIViewController *_responseController;
    unsigned long long _urlType;
    NSObject *_responseObject;
    unsigned long long _responseType;
}

@property(nonatomic) unsigned long long responseType; // @synthesize responseType=_responseType;
@property(nonatomic) NSObject *responseObject; // @synthesize responseObject=_responseObject;
@property(nonatomic) unsigned long long urlType; // @synthesize urlType=_urlType;
@property(retain, nonatomic) UIViewController *responseController; // @synthesize responseController=_responseController;
- (void).cxx_destruct;
- (void)parseUrl:(id)arg1 nativeParameters:(id)arg2;
- (id)init;

@end

