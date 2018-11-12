//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICAttachmentView.h"

@interface ICPDFAttachmentView : ICAttachmentView
{
    struct CGPDFDocument *_pdf;
    struct CGPDFPage *_page;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)didChangeMedia;
@property(readonly, nonatomic) struct CGPDFPage *page;
@property(readonly, nonatomic) struct CGPDFDocument *pdf;
- (void)cleanupPDFDocument;
- (void)dealloc;

@end
