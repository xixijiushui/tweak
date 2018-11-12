//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface Channel : NSObject <NSCoding>
{
    _Bool _hasCollection;
    _Bool _showFilter;
    NSString *_imgForNormal;
    NSString *_imgForSelected;
    NSString *_title;
    long long _cid;
    long long _used;
    long long _subCid;
}

+ (id)parseChannel:(id)arg1;
@property(nonatomic) long long subCid; // @synthesize subCid=_subCid;
@property(nonatomic) _Bool showFilter; // @synthesize showFilter=_showFilter;
@property(nonatomic) long long used; // @synthesize used=_used;
@property(nonatomic) _Bool hasCollection; // @synthesize hasCollection=_hasCollection;
@property(nonatomic) long long cid; // @synthesize cid=_cid;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *imgForSelected; // @synthesize imgForSelected=_imgForSelected;
@property(retain, nonatomic) NSString *imgForNormal; // @synthesize imgForNormal=_imgForNormal;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
