//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASKNewsItem.h"

@class NSString;

@interface ASKBannerNewsItem : ASKNewsItem
{
    int _target_type;
    NSString *_target_id;
    NSString *_target_url;
    NSString *_slides_logo;
}

@property(copy, nonatomic) NSString *slides_logo; // @synthesize slides_logo=_slides_logo;
@property(nonatomic) int target_type; // @synthesize target_type=_target_type;
@property(copy, nonatomic) NSString *target_url; // @synthesize target_url=_target_url;
@property(copy, nonatomic) NSString *target_id; // @synthesize target_id=_target_id;
- (void).cxx_destruct;
- (id)segueModel;
- (id)init;

@end

