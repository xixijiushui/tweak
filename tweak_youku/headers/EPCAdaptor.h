//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EPCAdaptor : NSObject
{
    id <EPCImageLoader> _imageloader;
    id <EPCViewPicker> _viewpicker;
    id <EPCFileLoader> _fileloader;
}

- (void).cxx_destruct;
- (id)viewpicker;
- (id)imageloader;
- (id)fileLoader;
- (void)registerViewPicker:(id)arg1;
- (void)registerImageLoader:(id)arg1;
- (void)registerFileLoader:(id)arg1;

@end

