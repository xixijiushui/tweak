//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKVideoAsset.h"

@class ALAsset;

@interface YKALVideoAsset : YKVideoAsset
{
    ALAsset *_alAsset;
}

@property(retain, nonatomic) ALAsset *alAsset; // @synthesize alAsset=_alAsset;
- (void).cxx_destruct;
- (id)thumbnail;
- (id)requestDataFromOffset:(long long)arg1 length:(long long)arg2;
- (id)initWithALAsset:(id)arg1;

@end

