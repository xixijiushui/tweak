//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NWSessionConfiguration : NSObject
{
    _Bool _keepAlive;
    _Bool _supportLocalDnsWhenNoPolicy;
    NSString *_host;
    id <NWSessionAuthenticationDelegate> _authDelegate;
}

+ (id)buildDefaultAuthenticationRequestWithHost:(id)arg1 withScheme:(id)arg2 withURLParameters:(id)arg3;
@property(nonatomic) __weak id <NWSessionAuthenticationDelegate> authDelegate; // @synthesize authDelegate=_authDelegate;
@property(nonatomic) _Bool supportLocalDnsWhenNoPolicy; // @synthesize supportLocalDnsWhenNoPolicy=_supportLocalDnsWhenNoPolicy;
@property(nonatomic) _Bool keepAlive; // @synthesize keepAlive=_keepAlive;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (id)description;

@end

