//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASKDrawer.h"

@class AESegueModel, NSArray, NSString;

@interface ASKMainViewHeadlineModel : ASKDrawer
{
    NSArray *_items;
    NSString *_imageUrlString;
    NSString *_drawer_logo_target_scheme;
}

@property(copy, nonatomic) NSString *drawer_logo_target_scheme; // @synthesize drawer_logo_target_scheme=_drawer_logo_target_scheme;
@property(copy, nonatomic) NSString *imageUrlString; // @synthesize imageUrlString=_imageUrlString;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (_Bool)isSameWith:(id)arg1;
@property(readonly, nonatomic) AESegueModel *segueModel;
- (id)init;

@end

