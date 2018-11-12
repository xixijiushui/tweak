//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKUploadContext.h"

@class NSNumber, NSString;

@interface UploadTask : YKUploadContext
{
    int _bindViewState;
    NSString *recordId;
    NSString *thumb;
    NSNumber *rating;
    NSString *duration;
}

@property(nonatomic) int bindViewState; // @synthesize bindViewState=_bindViewState;
@property(retain, nonatomic) NSString *duration; // @synthesize duration;
@property(retain, nonatomic) NSNumber *rating; // @synthesize rating;
@property(retain, nonatomic) NSString *thumb; // @synthesize thumb;
@property(retain, nonatomic) NSString *recordId; // @synthesize recordId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end
