//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSNumber, NSString;

@interface AILPLMicInfo : NSObject <NSCopying>
{
    NSString *_micNum;
    NSNumber *_version;
    long long _streamStatus;
    NSDictionary *_micPul;
    NSString *_micOwner;
}

+ (id)modelCustomPropertyMapper;
@property(copy, nonatomic) NSString *micOwner; // @synthesize micOwner=_micOwner;
@property(copy, nonatomic) NSDictionary *micPul; // @synthesize micPul=_micPul;
@property(nonatomic) long long streamStatus; // @synthesize streamStatus=_streamStatus;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *micNum; // @synthesize micNum=_micNum;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1;

@end
