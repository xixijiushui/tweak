//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface XAdMidPointModel : NSObject
{
    long long _index;
    double _start;
    NSString *_title;
    NSString *_type;
    NSString *_desc;
}

@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double start; // @synthesize start=_start;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)description;

@end

