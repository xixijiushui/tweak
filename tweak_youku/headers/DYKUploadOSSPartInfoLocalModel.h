//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DYKUploadOSSPartInfoLocalModel : NSObject
{
    long long _partNumber;
    long long _nextOffset;
    NSString *_eTag;
    long long _crc64;
}

@property(nonatomic) long long crc64; // @synthesize crc64=_crc64;
@property(copy, nonatomic) NSString *eTag; // @synthesize eTag=_eTag;
@property(nonatomic) long long nextOffset; // @synthesize nextOffset=_nextOffset;
@property(nonatomic) long long partNumber; // @synthesize partNumber=_partNumber;
- (void).cxx_destruct;
- (_Bool)isUploadSliceValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

