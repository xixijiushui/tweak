//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALMBaseViewModel.h"

@class NSString;

@interface TTFansPostPicViewModel : ALMBaseViewModel
{
    NSString *_picUrl;
    long long _length;
    long long _width;
    long long _type;
}

+ (id)initWithDataModels:(id)arg1;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long width; // @synthesize width=_width;
@property(nonatomic) long long length; // @synthesize length=_length;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
- (void).cxx_destruct;
- (id)initWithDataModel:(id)arg1;

@end

