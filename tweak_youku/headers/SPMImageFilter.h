//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface SPMImageFilter : NSObject
{
    int filterType;
    NSString *filterName;
    UIImage *thumbnail;
}

@property(nonatomic) int filterType; // @synthesize filterType;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail;
@property(retain, nonatomic) NSString *filterName; // @synthesize filterName;
- (void).cxx_destruct;

@end

