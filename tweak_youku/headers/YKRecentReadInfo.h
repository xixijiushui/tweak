//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKSRUBaseModel.h"

#import "NSCoding.h"

@class NSMutableArray;

@interface YKRecentReadInfo : YKSRUBaseModel <NSCoding>
{
    NSMutableArray *_channels;
}

@property(retain, nonatomic) NSMutableArray *channels; // @synthesize channels=_channels;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

