//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@protocol EPCImageLoader <NSObject>
- (void)loadImageWithKey:(NSString *)arg1 completion:(void (^)(_Bool, UIImage *))arg2;
- (UIImage *)imageForKey:(NSString *)arg1;
@end

