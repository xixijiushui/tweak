//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AESegueModel, NSString;

@interface ASKMainViewHeadlineItem : NSObject
{
    NSString *_typeDescription;
    NSString *_headlineNewsTitle;
    NSString *_target_scheme;
}

@property(copy, nonatomic) NSString *target_scheme; // @synthesize target_scheme=_target_scheme;
@property(copy, nonatomic) NSString *headlineNewsTitle; // @synthesize headlineNewsTitle=_headlineNewsTitle;
@property(copy, nonatomic) NSString *typeDescription; // @synthesize typeDescription=_typeDescription;
- (void).cxx_destruct;
@property(readonly, nonatomic) AESegueModel *segueModel;
- (id)init;

@end

