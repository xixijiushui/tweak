//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFBlockVM.h"

#import "YKFImagesLogicProtocol.h"

@class NSArray, NSString;

@interface YKFFeedCardImagesBlockVM : YKFBlockVM <YKFImagesLogicProtocol>
{
    long long selectedIndex;
    long long _maxImageCount;
    NSArray *_imageModels;
    struct CGSize _maxSize;
}

@property(retain, nonatomic) NSArray *imageModels; // @synthesize imageModels=_imageModels;
@property(nonatomic) long long maxImageCount; // @synthesize maxImageCount=_maxImageCount;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex;
- (void).cxx_destruct;
- (id)imageUrls;
- (Class)blockClass;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

