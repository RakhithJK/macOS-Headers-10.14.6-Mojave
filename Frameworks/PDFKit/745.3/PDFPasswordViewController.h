//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PDFKit/UIDocumentPasswordViewDelegate-Protocol.h>

@class PDFView, UIView;

__attribute__((visibility("hidden")))
@interface PDFPasswordViewController : UIViewController <UIDocumentPasswordViewDelegate>
{
    UIView *_passwordView;
    PDFView *_pdfView;
}

- (void).cxx_destruct;
- (void)_commonInit;
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;
- (void)setPDFView:(id)arg1;
- (void)loadView;

@end

