//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface SKUserDislikeModel : NSObject
{
    NSString *_VidOrSid;
    NSDate *_writeDate;
}

@property(retain, nonatomic) NSDate *writeDate; // @synthesize writeDate=_writeDate;
@property(copy, nonatomic) NSString *VidOrSid; // @synthesize VidOrSid=_VidOrSid;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
