//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBookCore/ABTask.h>

@class ABLocalImageLoader, NSArray;

@interface ABLocalLargeImageTask : ABTask
{
    NSArray *_imageIdentifiers;
    ABLocalImageLoader *_imageLoader;
}

- (id)run:(id *)arg1;
- (void)dealloc;
- (id)initWithImageIdentifiers:(id)arg1 imagesFolder:(id)arg2;

@end

