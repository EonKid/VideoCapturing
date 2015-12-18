//
//  ViewController.h
//  VideoPlay
//
//  Created by Aseem 1 on 18/12/15.
//  Copyright (c) 2015 codeBrew. All rights reserved.
//


#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>
#import <MobileCoreServices/MobileCoreServices.h>

@interface ViewController : UIViewController<UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (strong, nonatomic) NSURL *videoURL;
@property (strong, nonatomic) MPMoviePlayerController *videoController;
- (IBAction)captureVideo:(id)sender;


@end

