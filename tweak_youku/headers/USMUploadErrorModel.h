//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface USMUploadErrorModel : NSObject
{
    NSString *_uniqueid;
    NSString *_ts;
    NSString *_type;
    NSString *_stage;
    NSString *_neterror;
}

@property(copy, nonatomic) NSString *neterror; // @synthesize neterror=_neterror;
@property(copy, nonatomic) NSString *stage; // @synthesize stage=_stage;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *ts; // @synthesize ts=_ts;
@property(copy, nonatomic) NSString *uniqueid; // @synthesize uniqueid=_uniqueid;
- (void).cxx_destruct;

@end

