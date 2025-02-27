//
//  WebViewController.h
//  SoberGrid
//
//  Created by Haresh Kalyani on 11/6/14.
//  Copyright (c) 2014 Accucode Inc. All rights reserved.
//

typedef enum {
    kWebViewTypeBigBook = 0,
    kWebViewType12,
    kWebViewTypeFAQ,
    kWebViewTypeTypeContactUs,
    kWebViewTypeGeneral
}kWebViewType;

#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController
{
    NSURL *urlToLaunch;
}
@property (nonatomic , assign)int webViewType;
- (void)setUrl:(NSURL *)Url;

@end
