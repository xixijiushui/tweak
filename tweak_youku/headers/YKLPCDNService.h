//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YKLPCDNService : NSObject
{
    _Bool _isFrameworkLoadSuccess;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isFrameworkLoadSuccess; // @synthesize isFrameworkLoadSuccess=_isFrameworkLoadSuccess;
- (id)getPcdnService;
- (id)getPCDNAddress:(id)arg1;
- (_Bool)stopService;
- (_Bool)startService;

@end

